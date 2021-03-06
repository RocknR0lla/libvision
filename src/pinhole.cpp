#include <vision/camera/pinhole.h>

/*
class PinholeCam {

	public:

		PinholeCam() ;
		PinholeCam( double cx, double cy, double fx, double fy, double s ) ;	

		Vector2d Project ( Vector3d ) ;	
		ImageRef Project ( Vector3d ) ;

		Vector3d UnProject ( ImageRef ) ;
		Vector3d UnProject ( Vector2d ) ;

		double get_s() ;
		double get_fx() ;
		double get_fy() ;
		double get_cx() ;
		double get_cy() ;

		Vector2d get_f() ;
		Vector2d get_c() ;

		Matrix<double,1,Dynamic> get_deformation_coeffs() ;

		PinholeCam& operator= (const PinholeCam &other) ;
		
		friend ostream &operator >> (ostream &os_o, PinholeCam &ref);
		friend istream &operator << (istream &is_o, PinholeCam &ref);

	protected:

		Matrix<double, 3, 3>		K ;		
		Matrix<double, 1, Dynamic >	D ;
}
*/
