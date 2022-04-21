#include "KLinkedList.h"
#include "KFileIO.h"
template <typename KT, typename GT>
void run(KT _DataType, GT _DataInfoType);
int main()
{
	KNode Knode;
	run(Knode, Knode.m_Student.info);

	return 0;
}
template <typename KT, typename GT>
void run<KT>(KT _DataType, GT _DataInfoType)
{
	KLinkedList<KT> m_KLinkedList;
	KFileIO<KT,GT> m_IO;
	
	{
		bool isRun = true;
		int istudenttmp = 0;
		int itmp;
		std::string STRname = "��ü����";

		while (isRun)
		{

			if (m_KLinkedList.m_RootNode == nullptr)
			{
				//system("cls");
				std::cout << "===============�л��������α׷�===============" << std::endl;
				std::cout << "===============����� �л��Դϱ�?===============" << std::endl;
				std::cin >> istudenttmp;
				if (std::cin.fail())
				{
					std::cout << "===============���� �̻��մϴ�===============" << std::endl;
					std::cin.clear();
					std::cin.ignore(1024, '\n');

					istudenttmp = NULL;
					continue;
				}
				else
				{
					m_KLinkedList.Init(istudenttmp);
				}
			}
			std::cout << "===============� �۾��� ���Ͻʴϱ�?===============" << std::endl;
			std::cout << "===============�߰�|1|����|2|���|3|����|4|�ҷ�����|5|ȭ�������|6|����|7|===============" << std::endl;
			std::cin >> itmp;
			switch (itmp)
			{
			case 1:
				m_KLinkedList.AddList();
				break;
			case 2:
				std::cout << "===============�����Ͻ� �л����� �Է����ּ���(��ü������ ���Ѵٸ� '��ü����'�� Ÿ�����Ͻʽÿ�)===============" << std::endl;
				std::cin >> STRname;
				m_KLinkedList.Remove(STRname);
				break;
			case 3:
				m_KLinkedList.Draw();
				m_KLinkedList.Select();
				break;
			case 4:
				m_IO.fileOutput(m_KLinkedList.m_RootNode, m_KLinkedList.iTotalCount, _DataInfoType);
				break;
			case 5:

				KT* Nodetmp;
				std::cout << "===============������ �ҷ��ɴϴ�===============" << std::endl;
				std::cout << "***************��� �����Ͱ� �����ǰ� �ҷ��ɴϴ�***************" << std::endl;
				m_KLinkedList.Remove();
				if ((Nodetmp = m_IO.fileInput(_DataInfoType)) != nullptr)
				{
					m_KLinkedList.m_RootNode = Nodetmp;
					Nodetmp = nullptr;
					m_KLinkedList.iTotalCount = m_IO.NodeCount();
					std::cout << "===============�ҷ��� �л� ���� �Դϴ�===============" << std::endl;
					m_KLinkedList.Draw();
				}

				break;
			case 6:
				system("cls");
				break;
			case 7:
				isRun = false;
				break;
			default:
				isRun = false;
				break;
			}

		}
	}
}