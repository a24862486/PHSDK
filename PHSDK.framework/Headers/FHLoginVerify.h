//
//  FHLoginVerify.h
//  PHSDK
//
//  Created by LYG on 2020/11/30.
//

#import <Foundation/Foundation.h>
#import <PHSDK/FHError.h>
NS_ASSUME_NONNULL_BEGIN

@interface FHLoginVerify : NSObject
/**
 登录鉴权：身份认证获取accessToken
 username : 用户名
 password : 用户密码
 ipAddress : 服务器IP
 */
+ (void)fh_getAuthorizationWithUsername:(NSString *)username andPassword:(NSString*)password andipAddress:(NSString *)ipAddress finish: (void(^)(id responseObject,FHError * error))result;
/**
 刷新accessToken:refreshToken若过期，需要重新登录
 username : 用户名
 accessToken : 登录鉴权的Token
 refreshToken : 用于刷新accessToken
 */
+ (void)fh_refreshAccessTokenByUsername:(NSString *)username andAccessToken:(NSString *)accessToken andRefreshToken:(NSString *)refreshToken finish: (void(^)(id responseObject,FHError * error))result;

@end

NS_ASSUME_NONNULL_END
