//
//  ShiXIEmp.h
//  ocprj10
//
//  Created by zzxb on 16/9/3.
//  Copyright © 2016年 zzxb. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Employee.h"
#import "Student.h"

@protocol ShiXIEmp <Employee,Student>

- (void) jiaban;

@end
