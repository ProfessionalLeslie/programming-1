#pragma once

namespace Str_Ops
{
	void copy(char *dest, const char *src)
	{
		int length = 0;
		for (;;)
		{
			if (src[length] == 0) break;

			dest[length] = src[length];
			length++;
		}

		dest[length] = 0;
	}

	int length(const char *src)
	{
		//????
		return 0;
	}
}
