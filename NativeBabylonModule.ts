import type { TurboModule } from 'react-native';
import { TurboModuleRegistry } from 'react-native';

export interface Spec extends TurboModule {
  initialize(): Promise<boolean>;
  resetView(): Promise<boolean>;
}

export default TurboModuleRegistry.getEnforcing<Spec>('BabylonModule');
