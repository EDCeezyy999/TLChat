//
//  TLMessageManager+ConversationRecord.h
//  TLChat
//
//  Created by 李伯坤 on 16/3/20.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import "TLMessageManager.h"

@interface TLMessageManager (ConversationRecord)

- (void)conversationRecord:(void (^)(NSArray *))complete;

@end