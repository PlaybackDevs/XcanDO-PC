// DirectX 11 Code!
#include "stdafx.h"
#include "DX11System.h"

using namespace Logger;
using namespace std;
	
DX11Sys::DX11Sys()
{
	
}

void DX11Sys::Init(HWND hWnd) {
	Log("DX11 init", __FILE__, __LINE__);
	// create a struct to hold information about the swap chain

	// clear out the struct for use
	ZeroMemory(&scd, sizeof(DXGI_SWAP_CHAIN_DESC));

	// fill the swap chain description struct
	scd.BufferCount = 1;                                    // one back buffer
	scd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;     // use 32-bit color
	scd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;      // how swap chain is to be used
	scd.OutputWindow = hWnd;                                // the window to be used
	scd.SampleDesc.Count = 4;                               // how many multisamples
	scd.Windowed = TRUE;                                    // windowed/full-screen mode

															// create a device, device context and swap chain using the information in the scd struct
	D3D11CreateDeviceAndSwapChain(NULL,
		D3D_DRIVER_TYPE_HARDWARE,
		NULL,
		NULL,
		NULL,
		NULL,
		D3D11_SDK_VERSION,
		&scd,
		&swapchain,
		&dev,
		NULL,
		&devcon);
	
	Log("Hey look it worked!", __FILE__, __LINE__);
}


DX11Sys::~DX11Sys()
{
	dev->Release();
	devcon->Release();
	swapchain->Release();
}

