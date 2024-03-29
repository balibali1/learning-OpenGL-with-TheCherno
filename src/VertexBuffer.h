#pragma once

class Vertexbuffer
{
public:
	Vertexbuffer(const void* data, unsigned int size);
	~Vertexbuffer();

	void Bind() const;
	void Unbind() const;

private:
	unsigned int m_RendererID;
};
