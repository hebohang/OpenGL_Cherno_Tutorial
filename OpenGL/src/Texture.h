#pragma once

#include "Renderer.h"

#include <string>

class Texture
{
private:
	unsigned int m_RendererID;
	std::string m_FilePath;
	unsigned char* m_LocalBuffer; // CPU ¶Ë´æ´¢µÄ Texture
	int m_Width, m_Height, m_BPP; // Bit Per Pixel of the actual texture
public:
	Texture(const std::string& path);
	~Texture();

	void Bind(unsigned int slot = 0) const; 
	void Unbind() const;

	inline int GetWidth() const { return m_Width; };
	inline int GetHeight() const { return m_Height; };
};