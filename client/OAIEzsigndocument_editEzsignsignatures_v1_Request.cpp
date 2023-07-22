/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_editEzsignsignatures_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_editEzsignsignatures_v1_Request::OAIEzsigndocument_editEzsignsignatures_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_editEzsignsignatures_v1_Request::OAIEzsigndocument_editEzsignsignatures_v1_Request() {
    this->initializeModel();
}

OAIEzsigndocument_editEzsignsignatures_v1_Request::~OAIEzsigndocument_editEzsignsignatures_v1_Request() {}

void OAIEzsigndocument_editEzsignsignatures_v1_Request::initializeModel() {

    m_a_obj_ezsignsignature_isSet = false;
    m_a_obj_ezsignsignature_isValid = false;
}

void OAIEzsigndocument_editEzsignsignatures_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_editEzsignsignatures_v1_Request::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignsignature_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignsignature, json[QString("a_objEzsignsignature")]);
    m_a_obj_ezsignsignature_isSet = !json[QString("a_objEzsignsignature")].isNull() && m_a_obj_ezsignsignature_isValid;
}

QString OAIEzsigndocument_editEzsignsignatures_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_editEzsignsignatures_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignsignature.size() > 0) {
        obj.insert(QString("a_objEzsignsignature"), ::OpenAPI::toJsonValue(a_obj_ezsignsignature));
    }
    return obj;
}

QList<OAIEzsignsignature_RequestCompound> OAIEzsigndocument_editEzsignsignatures_v1_Request::getAObjEzsignsignature() const {
    return a_obj_ezsignsignature;
}
void OAIEzsigndocument_editEzsignsignatures_v1_Request::setAObjEzsignsignature(const QList<OAIEzsignsignature_RequestCompound> &a_obj_ezsignsignature) {
    this->a_obj_ezsignsignature = a_obj_ezsignsignature;
    this->m_a_obj_ezsignsignature_isSet = true;
}

bool OAIEzsigndocument_editEzsignsignatures_v1_Request::is_a_obj_ezsignsignature_Set() const{
    return m_a_obj_ezsignsignature_isSet;
}

bool OAIEzsigndocument_editEzsignsignatures_v1_Request::is_a_obj_ezsignsignature_Valid() const{
    return m_a_obj_ezsignsignature_isValid;
}

bool OAIEzsigndocument_editEzsignsignatures_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignsignature.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_editEzsignsignatures_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignsignature_isValid && true;
}

} // namespace OpenAPI
