/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload() {
    this->initializeModel();
}

Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::~Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload() {}

void Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsigndiscussion_isSet = false;
    m_a_obj_ezsigndiscussion_isValid = false;
}

void Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsigndiscussion_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsigndiscussion, json[QString("a_objEzsigndiscussion")]);
    m_a_obj_ezsigndiscussion_isSet = !json[QString("a_objEzsigndiscussion")].isNull() && m_a_obj_ezsigndiscussion_isValid;
}

QString Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_a_obj_ezsigndiscussion.size() > 0) {
        obj.insert(QString("a_objEzsigndiscussion"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsigndiscussion));
    }
    return obj;
}

QList<Ezsigndiscussion_Response> Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::getAObjEzsigndiscussion() const {
    return m_a_obj_ezsigndiscussion;
}
void Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::setAObjEzsigndiscussion(const QList<Ezsigndiscussion_Response> &a_obj_ezsigndiscussion) {
    m_a_obj_ezsigndiscussion = a_obj_ezsigndiscussion;
    m_a_obj_ezsigndiscussion_isSet = true;
}

bool Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::is_a_obj_ezsigndiscussion_Set() const{
    return m_a_obj_ezsigndiscussion_isSet;
}

bool Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::is_a_obj_ezsigndiscussion_Valid() const{
    return m_a_obj_ezsigndiscussion_isValid;
}

bool Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_a_obj_ezsigndiscussion.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Ezsigndocument_getEzsigndiscussions_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsigndiscussion_isValid && true;
}

} // namespace Ezmaxapi
