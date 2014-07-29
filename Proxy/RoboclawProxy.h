#include "drivermsg.pb.h"
#include "roboclaw.pb.h"

class RoboclawProxy 
{
private:


	static const int DEVICE_TYPE = 2;
	static const int DEVICE_ID = 0;

	int synNum;

	UdpClient* udp;
	
	int frontLeftSpeed;
	int frontRightSpeed;
	int rearLeftSpeed;
	int rearRightSpeed;

	char* requestScan;
	int requestScanLength;

	amber::DriverMsg *message;
	amber::roboclaw_proto::MotorsSpeed* motorsSpeedRequest(char* packetBytes);
	
	amber::DriverHdr  buildHeader();
	amber::DriverMsg* buildMsg(int synNum);
	void buildSendMessage(amber::DriverHdr header, amber::DriverMsg* message);

public:

	static const double wheelTrack = 0.280; //rozstaw pomiedzy kolami w [m]
	RoboclawProxy(UdpClient* client_udp);
	~RoboclawProxy();
	
	int FrontLeftSpeed();
	int FrontRightSpeed();
	int RearLeftSpeed();
	int RearRightSpeed();
	
    double GetSpeed();

    double GetAngle(double time);
};
