


#pragma once
#include "ofConstants.h"

//----------------------------------------------------------
// ofColor
//----------------------------------------------------------

class ofColor{
	public:
	
		ofColor ();
		virtual ~ ofColor ();
		
		ofColor (float _r, float _g, float _b, float _a = 255.0f);
		ofColor (ofColor const & color);
		ofColor (ofColor const & color, float _a);
		ofColor (float gray, float _a = 255.0f);
		static ofColor fromHsb (float hue, float saturation, float brightness);
		
		void set (float _r, float _g, float _b, float _a = 255.0f);
		void set (float _gray, float _a = 255.0f);
		void set (ofColor const & color);

		void setHex (int hexColor, float _a = 255.0f);
		int getHex ();
		
		ofColor& clamp ();
		ofColor& invert ();
		ofColor& normalize ();
		
		float getHue ();
		float getSaturation ();
		float getBrightness (); // brightest component
		float getLightness (); // average of the components
		void getHsb(float& hue, float& saturation, float& brightness);
		
		void setHue (float hue);
		void setSaturation (float saturation);
		void setBrightness (float brightness);
		void setHsb(float hue, float saturation, float brightness);
		
		ofColor & operator = (ofColor const & color);
		ofColor & operator = (float const & val);
		bool operator == (ofColor const & color);
		bool operator != (ofColor const & color);
		ofColor operator + (ofColor const & color) const;
		ofColor operator + (float const & val) const;
		ofColor & operator += (ofColor const & color);
		ofColor & operator += (float const & val);
		ofColor operator - (ofColor const & color) const;
		ofColor operator - (float const & val) const;
		ofColor & operator -= (ofColor const & color);
		ofColor & operator -= (float const & val);
		ofColor operator * (ofColor const & color) const;
		ofColor operator * (float const & val) const;
		ofColor & operator *= (ofColor const & color);
		ofColor & operator *= (float const & val);
		ofColor operator / (ofColor const & color) const;
		ofColor operator / (float const & val) const;
		ofColor & operator /= (ofColor const & color);
		ofColor & operator /= (float const & val);
		float & operator [] (int n);
		
		union  {
			struct {
				float r, g, b, a;
			};
			float v[4];
		};
};