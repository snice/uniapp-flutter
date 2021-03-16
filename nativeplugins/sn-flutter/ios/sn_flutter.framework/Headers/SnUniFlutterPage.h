//
//  SnUniFlutterPage.h
//  sn-flutter
//
//  Created by itfenbao on 2021/3/15.
//

#import <Foundation/Foundation.h>
#import "Flutter/Flutter.h"
#import "SnUniFlutterMsgProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface SnUniFlutterPage : FlutterViewController<SnUniFlutterMsgProtocol>

- (instancetype)initWithParams:(NSDictionary*)params;

@end

NS_ASSUME_NONNULL_END
