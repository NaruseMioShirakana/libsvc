#pragma once
#include "Tensor/Tensor.h"
LibSvcBegin
namespace Int16
{
	using ThisType = int16;

	ThisType CastFrom(TensorType _Type, void* _Val);

	void AssignValue(const Tensor& _Input, void* _Val, TensorType _ValType);

	void AssignBuffer(const Tensor& _Input, cpvoid BufferVoid, cpvoid BufferEndVoid);
}
LibSvcEnd