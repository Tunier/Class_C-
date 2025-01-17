#include "Logo.h"
#include "SceneManager.h"
#include "InputManager.h"

#include "DoubleBuffer.h"

Logo::Logo()
{
}

Logo::~Logo()
{
}

void Logo::Initialize()
{
}

void Logo::Update()
{
	DWORD dwKey = InputManager::GetInstance()->GetKey();

	if (dwKey &= KEYID_ENTER)
		SceneManager::GetInstance()->SetScene(SCENEIDS_MENU);
}

void Logo::Render()
{
	DoubleBuffer::GetInstance()->WriteBuffer(
		CONSOL_MAX_WIDTH / 2,
		CONSOL_MAX_HEIGHT / 2,
		(char*)"Logo");
}

void Logo::Release()
{
}
