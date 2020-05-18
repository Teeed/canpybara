#include "can.h"

void canpybara_version_report(void)
{
	CAN_TxHeaderTypeDef can_tx_header;
	uint8_t can_tx_data[8];

	can_tx_header.StdId = CANPYBARA_REPORT_VERSIONINFO;
	can_tx_header.ExtId = 0;
	can_tx_header.IDE = CAN_ID_STD;
	can_tx_header.RTR = CAN_RTR_DATA;
	can_tx_header.DLC = 2;
	can_tx_header.TransmitGlobalTime = DISABLE;

	can_tx_data[0] = 0;
	can_tx_data[1] = 2;

	canpybara_can_tx(&can_tx_header, can_tx_data);
}
