/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.17
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::~OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload() {}

void OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::initializeModel() {

    m_a_obj_ezsignannotation_isSet = false;
    m_a_obj_ezsignannotation_isValid = false;
}

void OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignannotation_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignannotation, json[QString("a_objEzsignannotation")]);
    m_a_obj_ezsignannotation_isSet = !json[QString("a_objEzsignannotation")].isNull() && m_a_obj_ezsignannotation_isValid;
}

QString OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignannotation.size() > 0) {
        obj.insert(QString("a_objEzsignannotation"), ::OpenAPI::toJsonValue(a_obj_ezsignannotation));
    }
    return obj;
}

QList<OAIEzsignannotation_ResponseCompound> OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::getAObjEzsignannotation() const {
    return a_obj_ezsignannotation;
}
void OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::setAObjEzsignannotation(const QList<OAIEzsignannotation_ResponseCompound> &a_obj_ezsignannotation) {
    this->a_obj_ezsignannotation = a_obj_ezsignannotation;
    this->m_a_obj_ezsignannotation_isSet = true;
}

bool OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::is_a_obj_ezsignannotation_Set() const{
    return m_a_obj_ezsignannotation_isSet;
}

bool OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::is_a_obj_ezsignannotation_Valid() const{
    return m_a_obj_ezsignannotation_isValid;
}

bool OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignannotation.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignannotation_isValid && true;
}

} // namespace OpenAPI
