#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class fixed{
	private:
		int fixed_p;
		static const int frac = 8;
	public:
		fixed();
		fixed(const fixed &new_fixed);
		fixed &operator =(const fixed &new_fixed){
			fixed_p = new_fixed.getRawBits();
			return *this;

		}
		int getRawBits() const;
		void setRawBits( int const raw );
		~fixed();
};

#endif