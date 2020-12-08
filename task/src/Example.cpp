#include "Str.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace trgm;

int main( int argc, char** argv )
{
	auto listOfStrings = std::vector< Str >{};

	for( Str inputString; ! std::cin.eof(); )
	{
		std::cin >> inputString;
		if( inputString.Length() == 0 )
			break;
		listOfStrings.push_back( std::move( inputString ) );
	}

	std::sort( std::begin( listOfStrings ), std::end( listOfStrings ), comparators::CaseInsensitiveInverse );

	for( auto& string : listOfStrings )
		std::cout << string << '\n';

	return 0;
}
