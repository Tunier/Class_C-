#include "Monster.h"
#include "DoubleBuffer.h"

Monster::Monster()
{
}

Monster::~Monster()
{
}

void Monster::Initialize()
{
	//m_tInfo.Position = Vector3(20.f, 20.f);

	m_tInfo.Scale = Vector3(2.f, 1.f);
}

void Monster::Update()
{

}

void Monster::Render()
{
	DoubleBuffer::GetInstance()->WriteBuffer(
		m_tInfo.Position.x,
		m_tInfo.Position.y,
		(char*)"M");
}

void Monster::Release()
{
}
