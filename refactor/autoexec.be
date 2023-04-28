import mqtt
import json
import string
def doit(topic, idx, data, databytes)
    var payload = json.load(data)
    tasmota.cmd(payload['cmnd'])
    mqtt.publish(payload['topic'], payload['payload'])
end
var topic = string.replace(
  string.replace(
    tasmota.cmd('FullTopic')['FullTopic'],
    '%topic%',
    tasmota.cmd('Topic')['Topic']
  ),
  '%prefix%',
  'tasmota'
)
mqtt.unsubscribe(topic)
mqtt.subscribe(topic, doit)

