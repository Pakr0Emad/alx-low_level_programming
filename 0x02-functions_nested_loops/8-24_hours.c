#include"main.h"

/**
 * jack_bauer- prints every minute of the day
*/

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putcahr((hr / 10) + 48);
			_putcahr((hr % 10) + 48);
			_putcahr(':')
			_putcahr((min / 10) + 48);
			_putcahr((min % 10) + 48);
			_putcahr('\n')
		}
	}
}
