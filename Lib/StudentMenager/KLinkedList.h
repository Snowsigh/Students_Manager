#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "KNodes.h"

template <typename K>
class KLinkedList
{
public:
	void Init(int ivalue);
	void AddList();
	
	void Remove(std::string NameValue = "��ü����");
	void Draw();
	void Select();

	

public:
	K* m_RootNode;
	int iTotalCount = 0;
	KLinkedList()
	{
		m_RootNode = nullptr;
	}

private:

};


template <typename K>
void KLinkedList<K>::Init(int ivalue)
{
	m_RootNode = new K;

	for (int iNode = 0; iNode < ivalue; iNode++)
	{
		AddList();
	}
}

template <typename K>
void KLinkedList<K>::AddList()
{
	if (m_RootNode->m_KTail == nullptr)
	{
		K* m_kNode = new K;
		{
			std::cout << "\n===============�л������� ����ϰڽ��ϴ�===============" << std::endl;
			std::string STRname;
			std::string STRadd;
			std::string STRnum;
			std::cout << "�л��� �̸��� �����ּ���  " << std::endl;
			std::cin >> STRname;
			std::cout << "�л��� �ּҸ� �����ּ���  " << std::endl;
			std::cin >> STRadd;
			std::cout << "�л��� �ڵ�����ȣ�� �����ּ���  " << std::endl;
			std::cin >> STRnum;

			m_kNode->m_Student.info.STRname = STRname;
			m_kNode->m_Student.info.STRaddress = STRadd;
			m_kNode->m_Student.info.STRnumber = STRnum;
			std::cout << "===============�л������� ��ϵǾ����ϴ�===============" << std::endl;

		}//�л��̸��߰�
		{
			std::string STRsupject;
			int iPoint;
			while (true)
			{
				std::cout << "������ ������ �����ּ���  " << std::endl;
				std::cin >> m_kNode->m_Student.iSubJect;
				if (std::cin.fail())
				{
					std::cout << "===============���� �̻��մϴ�===============" << std::endl;
					std::cin.clear();
					std::cin.ignore(1024, '\n');

				}
				else
				{
					break;
				}
			}


			for (int iSub = 0; iSub < m_kNode->m_Student.iSubJect; iSub++)
			{
				std::cout << "===============����� ������ �Է��Ͽ��ּ���===============" << std::endl;
				std::cin >> STRsupject >> iPoint;

				if (iPoint == false)
				{
					std::cout << "===============������ �̻��մϴ�, 0������ �����մϴ�===============" << std::endl;
					iPoint = 0;
				}

				//std::string* STRtmp = new std::string(STRsupject.c_str());
				m_kNode->m_Student.mapSubject.insert(std::make_pair(STRsupject, iPoint));

			}
		}//�л������߰�
		std::cout << "===============��� ������ ��ϵǾ����ϴ�===============" << std::endl;
		std::cout << m_kNode->m_Student.info.STRname << "  " << m_kNode->m_Student.info.STRaddress << "  " << m_kNode->m_Student.info.STRnumber << std::endl;

		std::map<std::string, int>::iterator iter;
		iter = m_kNode->m_Student.mapSubject.begin();

		for (int iSub = 0; iSub < m_kNode->m_Student.iSubJect; iSub++)
		{
			std::cout << iter->first << "  " << iter->second << std::endl;
			iter++;
		}
		std::cout << "===============�ش� ������ ��ϵǾ����ϴ�===============" << std::endl;
		std::cout << std::endl;

		m_kNode->m_KTail = m_RootNode;
		m_RootNode->m_KTail = m_kNode;
	}
	else
	{
		K* m_LastTail = m_RootNode->m_KTail;
		while (m_LastTail->m_KTail != m_RootNode)
			m_LastTail = m_LastTail->m_KTail;

		K* m_kNode = new K;

		{
			std::cout << "===============�л������� ����ϰڽ��ϴ�===============" << std::endl;
			std::string STRname;
			std::string STRadd;
			std::string STRnum;
			std::cout << "�л��� �̸��� �����ּ���  " << std::endl;
			std::cin >> STRname;
			std::cout << "�л��� �ּҸ� �����ּ���  " << std::endl;
			std::cin >> STRadd;
			std::cout << "�л��� �ڵ�����ȣ�� �����ּ���  " << std::endl;
			std::cin >> STRnum;

			m_kNode->m_Student.info.STRname = STRname;
			m_kNode->m_Student.info.STRaddress = STRadd;
			m_kNode->m_Student.info.STRnumber = STRnum;
			std::cout << "===============�л������� ��ϵǾ����ϴ�===============" << std::endl;

		}//�л��̸��߰�
		{

			std::string STRsupject;
			int iPoint;
			while (true)
			{
				std::cout << "������ ������ �����ּ���  " << std::endl;
				std::cin >> m_kNode->m_Student.iSubJect;
				if (std::cin.fail())
				{
					std::cout << "===============���� �̻��մϴ�===============" << std::endl;
					std::cin.clear();
					std::cin.ignore(1024, '\n');

				}
				else
				{

					break;
				}
			}

			for (int iSub = 0; iSub < m_kNode->m_Student.iSubJect; iSub++)
			{
				std::cout << "===============����� ������ �Է��Ͽ��ּ���===============" << std::endl;

				std::cin >> STRsupject >> iPoint;

				if (iPoint == false)
				{
					std::cout << "===============������ �̻��մϴ�, 0������ �����մϴ�===============" << std::endl;
					iPoint = 0;
				}

				//std::string* STRtmp = new std::string(STRsupject.c_str());
				m_kNode->m_Student.mapSubject.insert(std::make_pair(STRsupject, iPoint));



			}
		}//�л������߰�
		std::cout << "===============��� ������ ��ϵǾ����ϴ�===============" << std::endl;
		std::cout << m_kNode->m_Student.info.STRname << "  " << m_kNode->m_Student.info.STRaddress << "  " << m_kNode->m_Student.info.STRnumber << std::endl;

		std::map<std::string, int>::iterator iter;
		iter = m_kNode->m_Student.mapSubject.begin();

		for (int iSub = 0; iSub < m_kNode->m_Student.iSubJect; iSub++)
		{
			std::cout << iter->first << "  " << iter->second << std::endl;
			iter++;
		}

		std::cout << "===============�ش� ������ ��ϵǾ����ϴ�===============" << std::endl;
		std::cout << std::endl;

		m_LastTail->m_KTail = m_kNode;
		m_kNode->m_KTail = m_RootNode;
	}
	iTotalCount++;
}

template <typename K>
void KLinkedList<K>::Remove(std::string NameValue)
{
	if (m_RootNode->m_KTail == nullptr)
	{
		return;
	}
	if (NameValue == "��ü����")
	{
		std::cout << "===============��ü���� �˴ϴ�===============" << std::endl;
		while (m_RootNode->m_KTail != m_RootNode)
		{
			K* tmp;
			K* ftmp;
			tmp = m_RootNode;
			ftmp = m_RootNode;

			while (tmp->m_KTail != m_RootNode)
			{
				ftmp = tmp;
				tmp = tmp->m_KTail;
			}
			ftmp->m_KTail = m_RootNode;
			delete tmp;
			tmp = nullptr;
			iTotalCount--;
		}
		delete m_RootNode;
		m_RootNode = nullptr;
		iTotalCount--;
	}
	else
	{
		std::cout << "===============" << NameValue << " �л� ������ ���� �˴ϴ�============== = " << std::endl;
		if (m_RootNode->m_Student.info.STRname == NameValue)
		{
			K* tmp;
			tmp = m_RootNode->m_KTail;

			while (tmp->m_KTail != m_RootNode)
				tmp = tmp->m_KTail;
			tmp->m_KTail = m_RootNode->m_KTail;

			delete m_RootNode;
			m_RootNode = nullptr;
			iTotalCount--;
		}

		K* tmp = nullptr;
		K* ftmp = nullptr;
		tmp = m_RootNode->m_KTail;
		ftmp = m_RootNode;
		while (tmp->m_Student.info.STRname != NameValue)
		{
			ftmp = tmp;
			tmp = tmp->m_KTail;
			if (tmp->m_KTail == m_RootNode)
			{
				std::cout << "===============�л� ������ �����ϴ�============= = " << std::endl;
				return;
			}
		}
		ftmp->m_KTail = tmp->m_KTail;
		tmp = nullptr;
		iTotalCount--;

	}

}

template <typename K>
void KLinkedList<K>::Draw()
{
	if (m_RootNode->m_KTail == nullptr)
	{
		return;
	}
	K* tmp;
	tmp = m_RootNode->m_KTail;
	for (int iNode = 0; iNode < iTotalCount; iNode++)
	{
		std::cout << "===============" << tmp->m_Student.info.STRname << " �л� ����============== = " << std::endl;
		std::cout << tmp->m_Student.info.STRname << "  " << tmp->m_Student.info.STRaddress << "  " << tmp->m_Student.info.STRnumber << std::endl;


		std::map<std::string, int>::iterator iter;
		iter = tmp->m_Student.mapSubject.begin();

		for (int iSub = 0; iSub < tmp->m_Student.iSubJect; iSub++)
		{
			std::cout << iter->first << "  " << iter->second << std::endl;
			iter++;
		}


		tmp = tmp->m_KTail;
	}


}

template <typename K>
void KLinkedList<K>::Select()
{
	if (m_RootNode->m_KTail == nullptr)
	{
		return;
	}
	std::string STRtmpname;
	K* tmp = m_RootNode->m_KTail;

	std::cout << "===============� �л��� ã���ʴϱ�?===============" << std::endl;
	std::cout << "===============ã���ô� �л��� ���ٸ� �ƹ�Ű�� �����ֽʽÿ�===============" << std::endl;
	std::cin >> STRtmpname;
	std::cout << std::endl;

	while (tmp->m_Student.info.STRname != STRtmpname)
	{
		if (tmp->m_KTail == m_RootNode)
		{
			std::cout << "===============�ش��ϴ� �̸��� �����ϴ�===============" << std::endl;
			break;
		}
		tmp = tmp->m_KTail;
	}
	if (tmp->m_Student.info.STRname == STRtmpname)
	{
		std::cout << "===============" << tmp->m_Student.info.STRname << " �л� ����============== = " << std::endl;
		std::cout << tmp->m_Student.info.STRname << "  " << tmp->m_Student.info.STRaddress << "  " << tmp->m_Student.info.STRnumber << std::endl;


		std::map<std::string, int>::iterator iter;
		iter = tmp->m_Student.mapSubject.begin();

		for (int iSub = 0; iSub < tmp->m_Student.iSubJect; iSub++)
		{
			std::cout << iter->first << "  " << iter->second << std::endl;
			iter++;
		}

		std::string STRtmp;
		std::cout << "===============�����Ͻðڽ��ϱ�? Y/N===============" << std::endl;
		std::cin >> STRtmp;

		if (STRtmp == "Y" || STRtmp == "Yes" || STRtmp == "YES" || STRtmp == "yes" || STRtmp == "y")
		{
			Remove(tmp->m_Student.info.STRname);
			std::cout << "===============�����Ǿ����ϴ�===============" << std::endl;
			std::cout << std::endl;
			system("cls");
			std::cout << "===============���� �л� �����Դϴ�===============" << std::endl;
			Draw();
		}
		else
		{
			std::cout << "===============3���� ȭ���� �����˴ϴ�===============" << std::endl;
			Sleep(3000);
			system("cls");
			return;
		}

	}
}

