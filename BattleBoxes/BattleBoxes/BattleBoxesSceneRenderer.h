#pragma once
class BattleBoxesSceneRenderer sealed
{
public:
  BattleBoxesSceneRenderer();
  bool init(HWND hwnd);
  void shutdown();
  void setViewport();
  bool render();

private:
  std::shared_ptr<ID3D12Device> m_device;
  ID3D12CommandQueue* m_commandQueue;
  char m_videoCardDescription[128];
  IDXGISwapChain3* m_swapChain;
  ID3D12DescriptorHeap* m_renderTargetViewHeap;
  ID3D12Resource* m_backBufferRenderTarget[2];
  unsigned int m_bufferIndex;
  ID3D12CommandAllocator* m_commandAllocator;
  ID3D12GraphicsCommandList* m_commandList;
  ID3D12PipelineState* m_pipelineState;
  ID3D12Fence* m_fence;
  HANDLE m_fenceEvent;
  unsigned long long m_fenceValue;
  int m_videoCardMemory;
};

