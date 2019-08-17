#pragma once
#include "OpenGL3_Includes.h"

#include "Renderer/OGL3_Shader.h"
#include "Renderer/OGL3_Renderer_Core.h"

class OGL3_API OGL3_SYS : public GFX_API {
	friend class TuranEngine;

	OGL3_SYS();

	virtual void Initialization();
	virtual void Save_Monitors();
	virtual void Create_Renderer();
	static void GFX_Error_Callback(int error_code, const char* description);

public:
	//Window Operations
	virtual void Create_Window(string name);
	virtual void Close_Window(GFX_WINDOW* window);
	virtual void Change_Window_Resolution(GFX_WINDOW* window, unsigned int width, unsigned int height);
	virtual void Set_Window_Focus(GFX_WINDOW* window, bool is_focused);
	virtual void Set_Window_Callbacks();

	//Window Callbacks
	static void window_focus_callback(GLFWwindow* window, int focused);
	static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
	static void window_close_callback(GLFWwindow* window);

	//Renderer Operations
	virtual void Creation();
	virtual void New_Frame();
	virtual void Refresh_Windows();
	virtual void Swap_Buffers();

	//Input (Keyboard-Controller) Operations
	virtual void Take_Inputs();

	//Resource Destroy Operations
	virtual void Destroy_GFX_Resources();
};