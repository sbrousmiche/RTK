//#include "itkFFTWCommon.h"
//#include "itkFFTWComplexConjugateToRealImageFilter.h"
//#include "itkFFTWRealToComplexConjugateImageFilter.h"
#include "rtkAdditiveGaussianNoiseImageFilter.h"
#include "rtkAmsterdamShroudImageFilter.h"
#include "rtkBackProjectionImageFilter.h"
#include "rtkBoellaardScatterCorrectionImageFilter.h"
#include "rtkConstantImageSource.h"
#include "rtkDisplacedDetectorImageFilter.h"
#include "rtkDrawQuadricImageFilter.h"
#include "rtkDrawSheppLoganFilter.h"
#include "rtkElektaSynergyLutImageFilter.h"
#include "rtkElektaSynergyRawImageFilter.h"
#include "rtkElektaSynergyRawToAttenuationImageFilter.h"
#include "rtkFDKBackProjectionImageFilter.h"
#include "rtkFDKConeBeamReconstructionFilter.h"
#include "rtkFDKWeightProjectionFilter.h"
#include "rtkFFTRampImageFilter.h"
#include "rtkFieldOfViewImageFilter.h"
#include "rtkForwardProjectionImageFilter.h"
#include "rtkGeometricPhantomFileReader.h"
#include "rtkGgoFunctions.h"
#include "rtkHisImageIO.h"
#include "rtkHisImageIOFactory.h"
#include "rtkHndImageIO.h"
#include "rtkHndImageIOFactory.h"
#include "rtkHomogeneousMatrix.h"
#include "rtkJosephBackProjectionImageFilter.h"
#include "rtkJosephForwardProjectionImageFilter.h"
#include "rtkLutImageFilter.h"
#include "rtkMacro.h"
#include "rtkParkerShortScanImageFilter.h"
#include "rtkPhantomProjectionsCreatorFilter.h"
#include "rtkProjectionGeometry.h"
#include "rtkProjectionsReader.h"
#include "rtkRayBoxIntersectionFunction.h"
#include "rtkRayBoxIntersectionImageFilter.h"
#include "rtkRayCastInterpolateImageFunction.h"
#include "rtkRayCastInterpolatorForwardProjectionImageFilter.h"
#include "rtkRayEllipsoidIntersectionImageFilter.h"
#include "rtkRayQuadricIntersectionFunction.h"
#include "rtkRayQuadricIntersectionImageFilter.h"
#include "rtkSARTConeBeamReconstructionFilter.h"
#include "rtkSetQuadricParamFromRegularParamFunction.h"
#include "rtkSheppLoganPhantomFilter.h"
#include "rtkThreeDCircularProjectionGeometry.h"
#include "rtkThreeDCircularProjectionGeometryXMLFile.h"
#include "rtkTiffLutImageFilter.h"
#include "rtkVarianObiRawImageFilter.h"

#ifdef USE_OPENCL
  #include "rtkOpenCLFDKBackProjectionImageFilter.h"
  #include "rtkOpenCLFDKConeBeamReconstructionFilter.h"
  #include "rtkOpenCLUtilities.h"
#endif
#ifdef USE_CUDA
  #include "rtkCudaFDKBackProjectionImageFilter.h"
  #include "rtkCudaFDKConeBeamReconstructionFilter.h"
  #include "rtkCudaFFTRampImageFilter.h"
#endif

int main(int argc, char* argv[])
{ 
  std::cout << "\n\nTest PASSED! " << std::endl;
  exit(EXIT_SUCCESS);
}