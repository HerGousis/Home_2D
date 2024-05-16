#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
#define 	GLFW_KEY_TAB   258 
#define 	GLFW_KEY_BACKSPACE   259


const char* vertexShaderSourceCode =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pos_y=pos.y-1.25;\n"
"gl_Position = vec4(2*pos.x,pos_y,0.0, 1.0); \n"
"} \n";

const char* vertexShaderSourceCode1 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pos_x=pos.x;\n"
"float pos_y=pos.y+1.25; \n"
"gl_Position = vec4(-2*pos_x,-pos_y,0.0, 1.0); \n"
"} \n";
//spiti

const char* vertexShaderSourceCode2 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pos_x=pos.x;\n"
"float pos_y=pos.y-0.25; \n"
"gl_Position = vec4(pos_x,pos_y,0.0, 1.0); \n"
"} \n";

const char* vertexShaderSourceCode3 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pos_x=pos.x;\n"
"float pos_y=-pos.y-0.25; \n"
"gl_Position = vec4(-pos_x,pos_y,0.0, 1.0); \n"
"} \n";


//skepi
const char* vertexShaderSourceCode4 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pi=3.14/4;\n"
"float pos_x=pos.x*cos(pi)-pos.y*sin(pi);\n"
"float pos_y=-(pos.x*sin(pi)+pos.y*cos(pi))+0.15; \n"
"gl_Position = vec4(-pos_x,pos_y,0.0, 1.0); \n"
"} \n";

// parathuro
const char* vertexShaderSourceCode5 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pi=180;\n"
"float pos_x=-pos.x-1;\n"
"float pos_y=-pos.y-0.25; \n"
"gl_Position = vec4(pos_x,pos_y,0.0, 3.5); \n"
"} \n";


const char* vertexShaderSourceCode6 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pi=180;\n"
"float pos_x=pos.x-1;\n"
"float pos_y=pos.y-0.25; \n"
"gl_Position = vec4(pos_x,pos_y,0.0, 3.5); \n"
"} \n";

const char* vertexShaderSourceCode7 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pi=180;\n"
"float pos_x=-pos.x+1;\n"
"float pos_y=-pos.y-0.25; \n"
"gl_Position = vec4(pos_x,pos_y,0.0, 3.5); \n"
"} \n";


const char* vertexShaderSourceCode8 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pi=180;\n"
"float pos_x=pos.x+1;\n"
"float pos_y=pos.y-0.25; \n"
"gl_Position = vec4(pos_x,pos_y,0.0, 3.5); \n"
"} \n";

const char* vertexShaderSourceCode9 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pi=3.14/2;\n"
"float pos_x=pos.x*cos(pi)-pos.y*sin(pi);\n"
"float pos_y=-(pos.x*sin(pi)+pos.y*cos(pi))*1.5-2.25; \n"
"gl_Position = vec4(pos_x,pos_y,0.0, 4.0); \n"
"} \n";

const char* vertexShaderSourceCode10 =
"#version 330 core \n"
"\n"
"layout (location = 0) in vec3 pos; \n"
"void main() \n"
"{   \n"
"float pi=3.14/2;\n"
"float pos_x=pos.x*cos(pi)-pos.y*sin(pi);\n"
"float pos_y=(pos.x*sin(pi)+pos.y*cos(pi))*1.5-2.25; \n"
"gl_Position = vec4(-pos_x,pos_y,0.0, 4.0); \n"
"} \n";

const char* fragmentShaderSourceCode =
"#version 330 core \n"
"\n"
"void main() \n"
"{ \n"
"gl_FragColor = vec4(0.0f, 0.6f, 0.5f, 1.0); \n"
"} \n";

const char* fragmentShaderSourceCode1 =
"#version 330 core \n"
"\n"
"void main() \n"
"{ \n"
"gl_FragColor = vec4(0.0f, 0.6f, 0.5f, 1.0); \n"
"} \n";



//spiti
const char* fragmentShaderSourceCode2 =
"#version 330 core \n"
"\n"
"void main() \n"
"{ \n"
"gl_FragColor = vec4(1.8f, 0.9f, 0.6f, 1.0); \n"
"} \n";


//skepi
const char* fragmentShaderSourceCode3 =
"#version 330 core \n"
"\n"
"void main() \n"
"{ \n"
"gl_FragColor = vec4(0.9f, 0.0f, 0.0f, 1.0); \n"
"} \n";

//parathiro

const char* fragmentShaderSourceCode4 =
"#version 330 core \n"
"\n"
"void main() \n"
"{ \n"
"gl_FragColor = vec4(0.0f, 0.0f, 0.8f, 1.0); \n"
"} \n";

//PORTA
const char* fragmentShaderSourceCode5 =
"#version 330 core \n"
"\n"
"void main() \n"
"{ \n"
"gl_FragColor = vec4(0.3f, 0.3f, 0.3f, 1.0); \n"
"} \n";


void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
}

void ProcessInput(GLFWwindow* givenWindow)
{
	if (glfwGetKey(givenWindow, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(givenWindow, true);
}

bool flag = true;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
	if (key == GLFW_KEY_TAB && action == GLFW_PRESS) {
		if (flag) {
			flag = !flag;
			glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
			glLineWidth(10.0f);

		}
		else {
			flag = !flag;
			glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
			glLineWidth(10.0f);

		}
	}
}




int main() {

	std::cout << "Hello OpenGL!" << std::endl;

	// Initialize GLFW
	if (!glfwInit()) {
		std::cout << "Failed to initialize GLFW" << std::endl;
		return -1;
	}

	// Create window
	GLFWwindow* window = glfwCreateWindow(800, 600, "Home 2D Hercules", NULL, NULL);

	// Check if the window is created.
	if (window == NULL) {
		std::cout << "Failed to create GLFW window" << std::endl;
		glfwTerminate();
		return -1;
	}

	// Make the context that is created the current one
	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK) {
		std::cout << "Failed to initialize GLEW" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwSetKeyCallback(window, key_callback);

	// Set our viewport --> we tell openGL how to render everything that we give.
	glViewport(0, 0, 800, 600);

	// Create callback function
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	GLfloat vertices[] = {

		-0.5f, 0.5f, 0.0f,
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,
	};

	//generate a unique buffer ID
	GLuint triangle_vbo;
	glGenBuffers(1, &triangle_vbo);

	//bind the buffer to the context
	glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

	// Vertex shader
	GLuint vertexShader;
	vertexShader = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader, 1, &vertexShaderSourceCode, NULL);
	glCompileShader(vertexShader);

	GLuint vertexShader1;
	vertexShader1 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader1, 1, &vertexShaderSourceCode1, NULL);
	glCompileShader(vertexShader1);


	GLuint vertexShader2;
	vertexShader2 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader2, 1, &vertexShaderSourceCode2, NULL);
	glCompileShader(vertexShader2);

	GLuint vertexShader3;
	vertexShader3 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader3, 1, &vertexShaderSourceCode3, NULL);
	glCompileShader(vertexShader3);

	//skepi
	GLuint vertexShader4;
	vertexShader4 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader4, 1, &vertexShaderSourceCode4, NULL);
	glCompileShader(vertexShader4);


	//pafrathyro

	GLuint vertexShader5;
	vertexShader5 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader5, 1, &vertexShaderSourceCode5, NULL);
	glCompileShader(vertexShader5);

	GLuint vertexShader6;
	vertexShader6 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader6, 1, &vertexShaderSourceCode6, NULL);
	glCompileShader(vertexShader6);

	GLuint vertexShader7;
	vertexShader7 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader7, 1, &vertexShaderSourceCode7, NULL);
	glCompileShader(vertexShader7);

	GLuint vertexShader8;
	vertexShader8 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader8, 1, &vertexShaderSourceCode8, NULL);
	glCompileShader(vertexShader8);

	GLuint vertexShader9;
	vertexShader9 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader9, 1, &vertexShaderSourceCode9, NULL);
	glCompileShader(vertexShader9);

	GLuint vertexShader10;
	vertexShader10 = glCreateShader(GL_VERTEX_SHADER);
	glShaderSource(vertexShader10, 1, &vertexShaderSourceCode10, NULL);
	glCompileShader(vertexShader10);



	// Fragment Shader
	GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader, 1, &fragmentShaderSourceCode, NULL);
	glCompileShader(fragmentShader);

	GLuint fragmentShader1 = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader1, 1, &fragmentShaderSourceCode1, NULL);
	glCompileShader(fragmentShader1);

	GLuint fragmentShader2 = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader2, 1, &fragmentShaderSourceCode2, NULL);
	glCompileShader(fragmentShader2);
	//skepi
	GLuint fragmentShader3 = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader3, 1, &fragmentShaderSourceCode3, NULL);
	glCompileShader(fragmentShader3);

	//parathyro
	GLuint fragmentShader4 = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader4, 1, &fragmentShaderSourceCode4, NULL);
	glCompileShader(fragmentShader4);

	//porta

	GLuint fragmentShader5 = glCreateShader(GL_FRAGMENT_SHADER);
	glShaderSource(fragmentShader5, 1, &fragmentShaderSourceCode5, NULL);
	glCompileShader(fragmentShader5);


	// Program shader
	GLuint shaderProgram;
	shaderProgram = glCreateProgram();
	glAttachShader(shaderProgram, vertexShader);
	glAttachShader(shaderProgram, fragmentShader);
	glLinkProgram(shaderProgram);


	glDeleteShader(vertexShader);
	glDeleteShader(fragmentShader);

	GLuint shaderProgram1;
	shaderProgram1 = glCreateProgram();
	glAttachShader(shaderProgram1, vertexShader1);
	glAttachShader(shaderProgram1, fragmentShader1);
	glLinkProgram(shaderProgram1);


	glDeleteShader(vertexShader1);
	glDeleteShader(fragmentShader1);

	GLuint shaderProgram2;
	shaderProgram2 = glCreateProgram();
	glAttachShader(shaderProgram2, vertexShader2);
	glAttachShader(shaderProgram2, fragmentShader2);
	glLinkProgram(shaderProgram2);


	glDeleteShader(vertexShader2);
	glDeleteShader(fragmentShader2);

	GLuint shaderProgram3;
	shaderProgram3 = glCreateProgram();
	glAttachShader(shaderProgram3, vertexShader3);
	glAttachShader(shaderProgram3, fragmentShader2);
	glLinkProgram(shaderProgram3);


	glDeleteShader(vertexShader3);
	glDeleteShader(fragmentShader2);

	///skepi
	GLuint shaderProgram4;
	shaderProgram4 = glCreateProgram();
	glAttachShader(shaderProgram4, vertexShader4);
	glAttachShader(shaderProgram4, fragmentShader3);
	glLinkProgram(shaderProgram4);


	glDeleteShader(vertexShader4);
	glDeleteShader(fragmentShader3);

	//parathyro
	GLuint shaderProgram5;
	shaderProgram5 = glCreateProgram();
	glAttachShader(shaderProgram5, vertexShader5);
	glAttachShader(shaderProgram5, fragmentShader4);
	glLinkProgram(shaderProgram5);


	glDeleteShader(vertexShader5);
	glDeleteShader(fragmentShader4);

	GLuint shaderProgram6;
	shaderProgram6 = glCreateProgram();
	glAttachShader(shaderProgram6, vertexShader6);
	glAttachShader(shaderProgram6, fragmentShader4);
	glLinkProgram(shaderProgram6);


	glDeleteShader(vertexShader6);
	glDeleteShader(fragmentShader4);

	GLuint shaderProgram7;
	shaderProgram7 = glCreateProgram();
	glAttachShader(shaderProgram7, vertexShader7);
	glAttachShader(shaderProgram7, fragmentShader4);
	glLinkProgram(shaderProgram7);


	glDeleteShader(vertexShader7);
	glDeleteShader(fragmentShader4);

	GLuint shaderProgram8;
	shaderProgram8 = glCreateProgram();
	glAttachShader(shaderProgram8, vertexShader8);
	glAttachShader(shaderProgram8, fragmentShader4);
	glLinkProgram(shaderProgram8);


	glDeleteShader(vertexShader8);
	glDeleteShader(fragmentShader4);

	GLuint shaderProgram9;
	shaderProgram9 = glCreateProgram();
	glAttachShader(shaderProgram9, vertexShader9);
	glAttachShader(shaderProgram9, fragmentShader5);
	glLinkProgram(shaderProgram9);


	glDeleteShader(vertexShader9);
	glDeleteShader(fragmentShader5);

	GLuint shaderProgram10;
	shaderProgram10 = glCreateProgram();
	glAttachShader(shaderProgram10, vertexShader10);
	glAttachShader(shaderProgram10, fragmentShader5);
	glLinkProgram(shaderProgram10);


	glDeleteShader(vertexShader10);
	glDeleteShader(fragmentShader5);


	while (!glfwWindowShouldClose(window)) {

		float time = glfwGetTime();
		float Chanel = sin(time) * 0.5f + 0.5f;
		float Chanel1 = sin(time) * 0.8f + 0.5f;
		float Chanel2 = sin(time) * 0.1f + 0.5f;


		glClearColor(Chanel, Chanel1, Chanel2, 1.0f);

		//0.2f, 0.3f, 0.8f, 1.0f

		glClear(GL_COLOR_BUFFER_BIT);
		ProcessInput(window);




		glUseProgram(shaderProgram);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);
		glEnableVertexAttribArray(0);

		glDrawArrays(GL_TRIANGLES, 0, 3);


		glUseProgram(shaderProgram1);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);

		//spiti
		glUseProgram(shaderProgram2);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);

		glUseProgram(shaderProgram3);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);

		//skepi
		glUseProgram(shaderProgram4);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);

		//parathyro
		glUseProgram(shaderProgram5);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);

		glUseProgram(shaderProgram6);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);

		glUseProgram(shaderProgram7);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);

		glUseProgram(shaderProgram8);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);


		glUseProgram(shaderProgram9);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);
		glUseProgram(shaderProgram10);

		// bind vbo
		glBindBuffer(GL_ARRAY_BUFFER, triangle_vbo);

		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(GL_FLOAT), (void*)0);

		glEnableVertexAttribArray(0);


		glDrawArrays(GL_TRIANGLES, 0, 3);


		//
		glfwSwapBuffers(window); //send new frame to window
		glfwPollEvents();
	}


	glfwTerminate();

	return 0;
}