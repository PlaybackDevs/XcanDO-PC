#pragma once
#include "stdafx.h"
#pragma comment (lib, "d3d11.lib")

class DX11Sys
{
public:
	DX11Sys();
	~DX11Sys();
	void Init(HWND hWnd);

private:
	ID3D11Device *dev;
	ID3D11DeviceContext *devcon;
	IDXGISwapChain *swapchain;
	DXGI_SWAP_CHAIN_DESC scd;
};
