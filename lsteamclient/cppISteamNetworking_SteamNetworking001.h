extern SNetListenSocket_t cppISteamNetworking_SteamNetworking001_CreateListenSocket(void *, int, uint32, uint16);
extern SNetSocket_t cppISteamNetworking_SteamNetworking001_CreateP2PConnectionSocket(void *, CSteamID, int, int);
extern SNetSocket_t cppISteamNetworking_SteamNetworking001_CreateConnectionSocket(void *, uint32, uint16, int);
extern bool cppISteamNetworking_SteamNetworking001_DestroySocket(void *, SNetSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking001_DestroyListenSocket(void *, SNetListenSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking001_SendDataOnSocket(void *, SNetSocket_t, void *, uint32, bool);
extern bool cppISteamNetworking_SteamNetworking001_IsDataAvailableOnSocket(void *, SNetSocket_t, uint32 *);
extern bool cppISteamNetworking_SteamNetworking001_RetrieveDataFromSocket(void *, SNetSocket_t, void *, uint32, uint32 *);
extern bool cppISteamNetworking_SteamNetworking001_IsDataAvailable(void *, SNetListenSocket_t, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking001_RetrieveData(void *, SNetListenSocket_t, void *, uint32, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking001_GetSocketInfo(void *, SNetSocket_t, CSteamID *, int *, uint32 *, uint16 *);
extern bool cppISteamNetworking_SteamNetworking001_GetListenSocketInfo(void *, SNetListenSocket_t, uint32 *, uint16 *);
