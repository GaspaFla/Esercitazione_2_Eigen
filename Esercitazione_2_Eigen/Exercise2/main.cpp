#include <iostream>
#include "Eigen/Eigen"
using namespace std;
using namespace Eigen;
VectorXd lusolver(MatrixXd A,VectorXd b){


}

int main()
{   Vector2d sol=Vector2d::Constant(2,-1);

    Vector4d a;
    Vector2d b;
    Matrix2d A;
    A<< 5.547001962252291e-01, -3.770900990025203e-02, 8.320502943378437e-01, -9.992887623566787e-01;
    b <<-5.169911863249772e-01, 1.672384680188350e-01;
    //cout<<A<<endl;
    //cout<<b<<endl;
    VectorXd v=A.fullPivLu().solve(b);
    //cout<<scientific<<v<<endl;
    VectorXd w=A.householderQr().solve(b);
    //cout<<scientific<<w<<endl;
    double norma;
    norma=(v-sol).norm()/sol.norm();
    cout<<"l'errore del primo sistema con LU: " <<norma<<endl;
    norma=(w-sol).norm()/sol.norm();
    cout<<"l'errore del primo sistema con QR: " <<norma<<endl;



    a<< 5.547001962252291e-01, -5.540607316466765e-01, 8.320502943378437e-01,-8.324762492991313e-01;
    A=a.reshaped<RowMajor>(2,2);
    b <<-6.394645785530173e-04, 4.259549612877223e-04;
    //cout<<A<<endl;
    //cout<<b<<endl;
    v=A.fullPivLu().solve(b);
    //cout<<scientific<<v<<endl;
    w=A.householderQr().solve(b);
    //cout<<scientific<<w<<endl;
    norma=(v-sol).norm()/sol.norm();
    cout<<"l'errore del secondo sistema con LU: " <<norma<<endl;
    norma=(w-sol).norm()/sol.norm();
    cout<<"l'errore del secondo sistema con QR: " <<norma<<endl;

    a<< 5.547001962252291e-01, -5.547001955851905e-01, 8.320502943378437e-01,-8.320502947645361e-01;
    A=a.reshaped<RowMajor>(2,2);
    b <<-6.400391328043042e-10, 4.266924591433963e-10;
    //cout<<A<<endl;
    //cout<<b<<endl;
    v=A.fullPivLu().solve(b);
    //cout<<scientific<<v<<endl;
    w=A.householderQr().solve(b);
    //cout<<scientific<<w<<endl;
    norma=(v-sol).norm()/sol.norm();
    cout<<"l'errore del terzo sistema con LU: " <<norma<<endl;
    norma=(w-sol).norm()/sol.norm();
    cout<<"l'errore del terzo sistema con QR: " <<norma<<endl;





    return 0;
}
