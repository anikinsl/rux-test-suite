unsigned char a[] = {'\xb0', '\xb1', '\xb2', '\xb3', '\xb4', '\xb5',
	'\x91', '\xb6', '\xb7', '\xb8', '\xb9', '\xba',
	'\xbb', '\xbc', '\xbd', '\xbe', '\xbf', '\x80',
	'\x81', '\x82', '\x83', '\x84', '\x85', '\x86',
	'\x87', '\x88', '\x89', '\x8a', '\x8b', '\x8c',
	'\x8d', '\x8e', '\x8f', '\x90', '\x91', '\x92',
	'\x93', '\x94', '\x95', '\x81', '\x96', '\x97',
	'\x98', '\x99', '\x9a', '\x9b', '\x9c', '\x9d',
	'\x9e', '\x9f', '\xa0', '\xa1', '\xa2', '\xa3',
	'\xa4', '\xa5', '\xa6', '\xa7', '\xa8', '\xa9',
	'\xaa', '\xab', '\xac', '\xad', '\xae', '\xaf'};

unsigned char b[] = {'\xd0', '\xd0', '\xd0', '\xd0', '\xd0', '\xd0',
	'\xd1', '\xd0', '\xd0', '\xd0', '\xd0', '\xd0',
	'\xd0', '\xd0', '\xd0', '\xd0', '\xd0', '\xd1',
	'\xd1', '\xd1', '\xd1', '\xd1', '\xd1', '\xd1',
	'\xd1', '\xd1', '\xd1', '\xd1', '\xd1', '\xd1',
	'\xd1', '\xd1', '\xd1', '\xd0', '\xd0', '\xd0',
	'\xd0', '\xd0', '\xd0', '\xd0', '\xd0', '\xd0',
	'\xd0', '\xd0', '\xd0', '\xd0', '\xd0', '\xd0',
	'\xd0', '\xd0', '\xd0', '\xd0', '\xd0', '\xd0',
	'\xd0', '\xd0', '\xd0', '\xd0', '\xd0', '\xd0',
	'\xd0', '\xd0', '\xd0', '\xd0', '\xd0', '\xd0'};

int main()
{
	int i = 0;
	for (; i < 66; ) {
		//printf("\\x%x\n", a[i] ^ b[i]);
		int j = 6;
		while (j--) {
			printf("0x%x%x, ", b[i], a[i]);
			i++;
		}
		printf("\n");
	}
	return 0;
}