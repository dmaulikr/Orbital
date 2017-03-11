//
//  AppController.h
//  Orbital
//
//  Created by technasis on 12/9/09.
//  Copyright __Technasis__ 2009 . All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@interface AppController : NSObject 
{
    IBOutlet QCView* qcView;
}

- (IBAction) changeColorToBlue:(id)sender;

@end
