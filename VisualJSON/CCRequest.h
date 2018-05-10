//
//  CCRequest.h
//  VisualJSON
//
//  Created by dengyouhua on 10/05/2018.
//  Copyright © 2018 https://github.com/ccworld1000/VisualJSON. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CCRequest : NSObject

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) NSString *method;
@property (nonatomic, copy) NSString *querydata;
@property (nonatomic, copy) NSString *content;

@end
