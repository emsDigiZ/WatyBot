#define DojangAddy 0xC80A04 //8B 01 8B 50 14 FF D2 8B 88 ? ? ? ? 51 05 ? ? ? ? 50 E8 ? ? ? ? 83 C4 08 F7 D8 1B C0 F7 D8 C3 - 6TH Result
#define DojangCall 0xD562D0
#define IceGuardAddy 0xCD6560
#define IceGuardPush 0xF53FBB //The push 1 line below the Addy
#define AggroAddy 0xD650A6
#define AggroCall 0xD5C530
#define PinTyperAddy1 0x6D4BC6
#define PinTyperAddy2 0x6D62E7
#define PicTyperAddy1 0x893236 //0F 84 ?? ?? ?? ?? 6A ?? 6A ?? 51 8B C4 89 64 24 ?? 68 ?? ?? ?? ?? 50
#define PicTyperAddy2 0x8B21D5 //01 00 00 00 89 45 ?? E8 ?? ?? ?? ?? 89 45 ?? C6 45 ?? ??
#define PicTyperAddy3 0x92E097 //E8 ?? ?? ?? ?? EB ?? 33 C0 C6 45 ?? ?? 85 C0 74 ?? 83 C0 ?? 74 ?? 8D 70 ?? 85 F6
#define FusionAddy 0x75D5B4
#define PerfectLootAddy1 0x4C59E7
#define PerfectLootAddy2 0x55FA35
#define PerfectLootAddy3 0x44BFE9
#define NoBGAddy1 0xERROR
#define NoBGAddy2 0x70171B
#define FasterMobsAddy 0x776AB3
#define UnlimitedMorphAddy1 0xCF3FCF
#define UnlimitedMorphAddy2 0xCF4ADE
#define gNDAddy1 0xCB5C63
#define gNDAddy2 0xERROR
#define JDAAddy1 0xC8F907
#define JDAAddy2 0xC8F944
#define JDAAddy3 0xC8F962
#define MobDisarmAddy 0x75A95A
#define NoMobsAddy 0x75F9ED
#define AirLootAddy 0x560B89
#define VacRightAddy 0xD56030
#define WalkRightAddy 0xD61F0B
#define JumpRightAddy 0xD6240F
#define NoKBAddy 0x90505B
#define SitHackAddy 0xC858D1
#define SPControlAddy 0xCAED33
#define SPCChecksAddy 0xCAED40
#define Godmode50SecAddy1 0xCD833F
#define Godmode50SecAddy2 0xCD835A
#define LogoSkipperAddy 0xERROR
#define ItemVacAddy 0x720D04 //e8 ? ? ? ? 8b c8 8b 44 24 ? 89 38  -7th Result
#define ItemVacCall 0x422410
#define ViewSwearsAddy 0x90182B
#define FMAAddy 0x75D5A4
#define ScareMobsAddy 0x75B45F
#define FLACC 0xD561AA
#define CPUAddy1 0x60EFB1
#define CPUAddy2 0xERROR
#define CPUAddy3 0xERROR
#define UAAddy 0x4EC30F //89 38 5F 89 48 04 5E C2 ? ? CC - 3rd result
#define DFAAddy 0x8348C2
#define NDMiningAddy1 0xC8C932
#define NDMiningAddy2 0xC8CA0B
#define NDMiningAddy3 0xC9F0C7
#define HideDamageAddy1 0x46C63B
#define HideDamageAddy2 0x73A2E4
#define HideDamageAddy3 0xERROR
#define HideDamageAddy4 0xERROR
#define HideDamageAddy5 0x731A7F
#define MercedesComboAddy 0x412E5B
#define ExitCSAddy 0x91C12E //75 15 57 FF 15 ? ? ? ? 3B F3 74 0A 8B 16 8B 02 6A 01 8B CE FF d0 8b 4c 24 ? 64 89 0D 00 00 00 00 -4th Result MemoryView below: mov fs:[00000000],ecx
#define ExitCSCall 0xFB2084 //See ExitCSAddy
#define NoCCBoxesAddy1 0x421E40
#define NoCCBoxesAddy2 0xERROR
#define FadeAddy1 0x895840 //6A ? 68 ? ? ? ? 64 A1 ? ? ? ? 50 83 EC ? 53 55 56 57 A1 ? ? ? ? 33 C4 50 8D 44 24 ? 64 A3 ? ? ? ? A1 ? ? ? ? - 4h result
#define FadeAddy2 0x895CF0
#define MouseFlyAddy 0xCD32D9
#define MouseFlyCall1 0xD12E70 //Opcode
#define MouseFlyCall2 0x421E40
#define CCAddy 0x58AAE0 //CField::SendTransferChannelRequest
#define CSAddy 0xDB3060 //lpfnCWvsContext::SendMigrateToShopRequest
#define SendPacketAddy 0x4DA3C0 //CClientSocket::SendPacket
#define SendPacketHookAddy 0x4277A0 //8B 44 24 04 8B 0D ? ? ? ? 50 E8 ? ? ? ? C3 - 2nd result, check if it ends with a call to SendPacketAddy
