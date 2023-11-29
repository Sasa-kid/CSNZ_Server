#pragma once

#include "common/buffer.h"

class CSendPacket
{
public:
	CSendPacket(IExtendedSocket* socket, int packetID);
	~CSendPacket();

	std::vector<unsigned char> SetPacketLength();
	Buffer GetData();
	void WriteInt8(int number);
	void WriteInt16(int number, bool littleEndian = true);
	void WriteInt32(int number, bool littleEndian = true);
	void WriteInt64(long long number, bool littleEndian = true);
	void WriteUInt8(unsigned int number);
	void WriteUInt16(unsigned int number, bool littleEndian = true);
	void WriteUInt32(unsigned int number, bool littleEndian = true);
	void WriteUInt64(unsigned long long number, bool littleEndian = true);
	void WriteString(const std::string& message, bool writesize = false);
	void WriteWString(const std::wstring& message);
	void WriteData(void* data, int len);
	void WriteArray(const std::vector<unsigned char>& arr);
	void SetWriteOffset(int offset);
	void SetOverride(bool override);
	bool IsBufferFull();
	void BuildHeader();
	void Send(std::vector<unsigned char>& data);

public:
	int m_nPacketID;
	int m_nSequence;

	IExtendedSocket* m_pSocket;
	Buffer m_OutStream;
};