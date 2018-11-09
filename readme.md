<p align="center">
	<br>
	<img src="https://cdn.abranhe.com/projects/binary/logo.svg">
	<br>
	<br>
	<b>binary.c</b>: An small C library to work with binary numbers
	<br>
</p>

<p align="center">
	<a href="https://travis-ci.org/abranhe/binary.c"><img src="https://img.shields.io/travis/abranhe/binary.c.svg?logo=travis" /></a>
	<a href="https://github.com/abranhe"><img src="https://abranhe.com/badge.svg"></a>
	<a href="https://cash.me/$abranhe"><img src="https://cdn.abranhe.com/badges/cash-me.svg"></a>
	<a href="https://patreon.com/abranhe"><img src="https://cdn.abranhe.com/badges/patreon.svg" /></a>
	<a href="https://github.com/abranhe/binary.c/blob/master/license"><img src="https://img.shields.io/github/license/abranhe/binary.c.svg" /></a>

  <br>
  <br>
</p>
In mathematics and digital electronics, a binary number is a number expressed in the base-2 numeral system or binary numeral system, which uses only two symbols: typically 0 and 1.


## Installation

*Installing using [Clib](https://github.com/clibs/clib)*

```sh
$ clib install abranhe/binary.c
```

## Usage

```c
#include <stdio.h>
#include "binary.h"

int main() {
	printf("%d\n", is_binary(1010));
	// 1
	printf("%ld\n", to_decimal(10000000011));
	// 1027
	printf("%lld\n", to_binary(1000));
	// 1111101000
}
```

## API

#### `bool is_binary(long binary);`

*Returns true (`1`) if the number is binary, otherwise return false (`0`)*

###### Params:

- `binary`: long binary number

#### `long to_decimal(long long binary);`

*Returns a long decimal number from a binary number*

###### Params:

- `binary`: long binary number

#### `long long to_binary(long decimal);`

*Returns a binary number from a decimal number*

###### Params:

- `decimal`: a long decimal number

## Team

|[![Carlos Abraham Logo][abranhe-img]][abranhe]|
| :-: |
| [Carlos Abraham][abranhe] |

## License

[MIT][license] License © [Carlos Abraham][abranhe]

<!-------------------- Links ------------------------>
[abranhe]: https://github.com/abranhe
[abranhe-img]: https://avatars3.githubusercontent.com/u/21347264?s=50
[license]: https://github.com/abranhe/binary.c/blob/master/license
[example]: https://github.com/abranhe/binary.c/blob/master/example.c
[travis-badge]: https://img.shields.io/travis/abranhe/binary.c.svg
[travis-status]: https://travis-ci.org/abranhe/binary.c
[coverage-badge]: https://img.shields.io/coveralls/abranhe/binary.c.svg
[coverage-status]: https://coveralls.io/r/abranhe/binary.c?branch=master
