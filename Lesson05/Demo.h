#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	float scale = 1;
	float size = 0.0050f;
	float pos = 0;
	float** wayPoint;
	int i = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);
	void BuildColoredCube();
	void BuildColoredPlane();
	// void DrawColoredCube(glm::vec3 translate_vector, glm::vec3 rotate_vector, glm::vec3 scale_vector, float rotate_angle);
	void DrawColoredCube(glm::vec3 translate_vector, glm::vec3 rotate_vector, glm::vec3 scale_vector, float rot_angle, bool rotate);
	void DrawColoredPlane();
	float** GenerateBezier();
};