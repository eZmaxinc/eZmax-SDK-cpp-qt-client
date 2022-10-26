/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf() {
    this->initializeModel();
}

OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::~OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf() {}

void OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::initializeModel() {

    m_a_obj_ezsignfoldertype_isSet = false;
    m_a_obj_ezsignfoldertype_isValid = false;
}

void OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldertype_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldertype, json[QString("a_objEzsignfoldertype")]);
    m_a_obj_ezsignfoldertype_isSet = !json[QString("a_objEzsignfoldertype")].isNull() && m_a_obj_ezsignfoldertype_isValid;
}

QString OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignfoldertype.size() > 0) {
        obj.insert(QString("a_objEzsignfoldertype"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldertype));
    }
    return obj;
}

QList<OAIEzsignfoldertype_ListElement> OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::getAObjEzsignfoldertype() const {
    return a_obj_ezsignfoldertype;
}
void OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::setAObjEzsignfoldertype(const QList<OAIEzsignfoldertype_ListElement> &a_obj_ezsignfoldertype) {
    this->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;
    this->m_a_obj_ezsignfoldertype_isSet = true;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::is_a_obj_ezsignfoldertype_Set() const{
    return m_a_obj_ezsignfoldertype_isSet;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::is_a_obj_ezsignfoldertype_Valid() const{
    return m_a_obj_ezsignfoldertype_isValid;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignfoldertype.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldertype_isValid && true;
}

} // namespace OpenAPI
