/* � 2015 Semtech Corporation, 200 Flynn Road, Camarillo, CA 93012 U.S.A. All rights reserved.
The copyright of this file is owned by Semtech Corporation (Semtech). This is an unpublished work.  The content of this file must be used only for the purpose for which it was  supplied by Semtech or its distributors. The content of this file must not be copied or disclosed unless authorized in writing by Semtech.  */

#include "TrivialControllerAgorithm.hpp"



void TrivialControllerAgorithm::NewData(uint32 sequenceNumber, MoteTransmitRecord const& transmitRecord, GatewayReceiveList const& gatewayReceiveList)
{
}

bool TrivialControllerAgorithm::CommandReceived(WordStore& commandWords)
{
	return true;
}