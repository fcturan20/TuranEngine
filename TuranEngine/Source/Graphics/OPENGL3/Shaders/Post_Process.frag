#version 330 core
in vec2 TextCoords;

out vec4 Fragment_Color;

uniform sampler2D Display_Texture;

void main(){
	float gamma = 2.2;
	Fragment_Color = texture(Display_Texture, TextCoords);
}