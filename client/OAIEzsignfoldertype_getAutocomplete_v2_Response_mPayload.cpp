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

#include "OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::~OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload() {}

void OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::initializeModel() {

    m_a_obj_ezsignfoldertype_isSet = false;
    m_a_obj_ezsignfoldertype_isValid = false;
}

void OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_a_obj_ezsignfoldertype_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignfoldertype, json[QString("a_objEzsignfoldertype")]);
    m_a_obj_ezsignfoldertype_isSet = !json[QString("a_objEzsignfoldertype")].isNull() && m_a_obj_ezsignfoldertype_isValid;
}

QString OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (a_obj_ezsignfoldertype.size() > 0) {
        obj.insert(QString("a_objEzsignfoldertype"), ::OpenAPI::toJsonValue(a_obj_ezsignfoldertype));
    }
    return obj;
}

QList<OAIEzsignfoldertype_AutocompleteElement_Response> OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::getAObjEzsignfoldertype() const {
    return a_obj_ezsignfoldertype;
}
void OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::setAObjEzsignfoldertype(const QList<OAIEzsignfoldertype_AutocompleteElement_Response> &a_obj_ezsignfoldertype) {
    this->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;
    this->m_a_obj_ezsignfoldertype_isSet = true;
}

bool OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsignfoldertype_Set() const{
    return m_a_obj_ezsignfoldertype_isSet;
}

bool OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::is_a_obj_ezsignfoldertype_Valid() const{
    return m_a_obj_ezsignfoldertype_isValid;
}

bool OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_obj_ezsignfoldertype.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldertype_getAutocomplete_v2_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_obj_ezsignfoldertype_isValid && true;
}

} // namespace OpenAPI
