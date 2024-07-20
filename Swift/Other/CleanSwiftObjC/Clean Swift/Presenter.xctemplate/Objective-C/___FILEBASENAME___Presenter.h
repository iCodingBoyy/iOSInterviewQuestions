//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//  Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
//
//  This file was generated by the Clean Swift Xcode Templates so
//  you can apply clean architecture to your iOS and Mac projects,
//  see http://clean-swift.com
//

#import "___VARIABLE_sceneName___Common.h"

@protocol ___VARIABLE_sceneName___DisplayLogic;

@protocol ___VARIABLE_sceneName___PresentationLogic
- (void)presentSomething:(___VARIABLE_sceneName___DoSomethingResponse *)response;
@end

@interface ___VARIABLE_sceneName___Presenter: NSObject <___VARIABLE_sceneName___PresentationLogic>
@property (weak, nonatomic) id<___VARIABLE_sceneName___DisplayLogic> viewController;
@end