/**
 * ������� ����/�������ֵ�TXT�ĵ�
 */
#include "util.h"
int main()
{
    map<u16,string> codeMap;
    loadCodeMap(codeMap);
    getSkillName(codeMap);
    getBreedName(codeMap);
    getItemName(codeMap);
    return 0;
}