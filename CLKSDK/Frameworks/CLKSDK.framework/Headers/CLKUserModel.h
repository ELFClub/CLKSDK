//
//  CLKUserModel.h
//  
//

#import <Foundation/Foundation.h>
#import "CLKSDKDefines.h"

@interface CLKUserBaseModel : NSObject

//用户信息
@property (nonatomic, strong) NSString *uid;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) NSString *cookie;
@property (nonatomic, assign) Boolean isBindEmail;
@property (nonatomic, assign) CLKLoginType loginType;

- (Boolean)isQLUser;

@end

@interface CLKUserModel : CLKUserBaseModel


//角色信息
@property (nonatomic, strong) NSString *serverId;
@property (nonatomic, strong) NSString *roleId;
@property (nonatomic, strong) NSString *roleName;
@property (nonatomic, strong) NSString *roleLevel;
@property (nonatomic, strong) NSString *roleCoin;
@property (nonatomic, strong) NSString *roleMoney;

@end
