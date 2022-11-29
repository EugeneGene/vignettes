// Source MD5: 95da189dd54a91e555e72182dfee85e4

#include "simeta-mread-header.h"

// PREAMBLE CODE BLOCK:
__BEGIN_config__
__END_config__

// MAIN CODE BLOCK:
__BEGIN_main__
    if(NEWIND <=1) {
      BASE = TVBASE*exp(EBASE);
      i = 0;
      if(FLAG > 0) {
        while((BASE < 80) || (BASE > 120)) {
          if(++i > 100) {
            mrg::report("There was a problem simulating BASE.");
            break;
          }
          simeta();
          BASE = TVBASE*exp(EBASE);
        }
      }
      RESPONSE_0 = BASE;
    }
__END_main__

// DIFFERENTIAL EQUATIONS:
__BEGIN_ode__
DXDTZERO();
__END_ode__

// TABLE CODE BLOCK:
__BEGIN_table__
_capture_[0] = EBASE;
_capture_[1] = BASE;
__END_table__

