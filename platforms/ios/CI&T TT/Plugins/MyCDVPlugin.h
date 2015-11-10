//
//  MyCDVPlugin.h
//  CI&T TT
//
//  Created by Elton Candido Alves on 11/9/15.
//
//

#import <Cordova/CDVPlugin.h>

@interface MyCDVPlugin : CDVPlugin

- (void)getVersionNumber:(NSMutableArray*)arguments withDict:(NSMutableDictionary*)options;

@end
