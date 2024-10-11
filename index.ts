const BabylonModule = require('./NativeBabylonModule').default;

export function initialize(): Promise<boolean> {
  return BabylonModule.initialize();
}

export function resetView(): Promise<boolean> {
  return BabylonModule.resetView();
}
