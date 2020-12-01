//
//  FHUserSignatureApi.h
//  PHSDK
//
//  Created by LYG on 2020/11/30.
//

#import <Foundation/Foundation.h>
#import <PHSDK/FHError.h>
NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, SIGNMODE) {
    SYNERGY_SIGN_MODO = 1,//普通
    SYNERGY_SIGN_MODFISEC,//fisec
};
@interface FHUserSignatureApi : NSObject
/**
 协同签名获取签名分量
 SIGNMODE）u32Mod : 生成签名分量选择的模式
 token : 登录获取的accessToken
 */
+ (void)fh_GetSignKeyDisWithMode:(SIGNMODE)u32Mod andAccessToken:(NSString *)token finish:(void(^)(id responseObject,FHError *error))result;

/**
 单方签名：由单个签名分量进行签名
 SIGNMODE）u32Mod : 需要与获取签名分量的模式保持一致
 k : 签名分量中获取的随机数
 pu8InBuf : 签名的数据，长度不超过32
 ivValue : 签名分量
 token : accessToken
 */
+ (void)fh_SubsetSignWithMode:(SIGNMODE)u32Mod andAccessToken:(NSString *)token andK:(NSString*)randomK andpu8InBuf:(NSString*)pu8InBuf andivValue:(NSString*)ivValue finish:(void(^)(id responseObject,FHError *error))result;

@end

NS_ASSUME_NONNULL_END
