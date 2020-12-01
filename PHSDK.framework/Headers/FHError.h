//
//  FHError.h
//  PHSDK
//
//  Created by LYG on 2020/11/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, FHErrorCode) {
    FHWrongAccountOrPassword = 1001,  // 用户名密码错误
    FHWrongAccessToken = 1002,   // accessToken错误
    FHAccessTokenExpired = 1003,    // accessToken过期
    FHRefreshTokenExpired = 1004,   // refreshToken过期
};
@interface FHError : NSObject
@property (nonatomic,assign) FHErrorCode code;
@property (nonatomic,copy,readwrite) NSString* codeDescription;
- (instancetype)initWithCode:(FHErrorCode)acode;
@end

NS_ASSUME_NONNULL_END
