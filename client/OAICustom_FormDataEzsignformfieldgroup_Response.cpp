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

#include "OAICustom_FormDataEzsignformfieldgroup_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICustom_FormDataEzsignformfieldgroup_Response::OAICustom_FormDataEzsignformfieldgroup_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICustom_FormDataEzsignformfieldgroup_Response::OAICustom_FormDataEzsignformfieldgroup_Response() {
    this->initializeModel();
}

OAICustom_FormDataEzsignformfieldgroup_Response::~OAICustom_FormDataEzsignformfieldgroup_Response() {}

void OAICustom_FormDataEzsignformfieldgroup_Response::initializeModel() {

    m_s_ezsignformfieldgroup_label_isSet = false;
    m_s_ezsignformfieldgroup_label_isValid = false;

    m_a_obj_ezsignformfield_isSet = false;
    m_a_obj_ezsignformfield_isValid = false;
}

void OAICustom_FormDataEzsignformfieldgroup_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICustom_FormDataEzsignformfieldgroup_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsignformfieldgroup_label_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfieldgroup_label, json[QString("sEzsignformfieldgroupLabel")]);
    m_s_ezsignformfieldgroup_label_isSet = !json[QString("sEzsignformfieldgroupLabel")].isNull() && m_s_ezsignformfieldgroup_label_isValid;

    m_a_obj_ezsignformfield_isValid = ::OpenAPI::fromJsonValue(a_obj_ezsignformfield, json[QString("a_objEzsignformfield")]);
    m_a_obj_ezsignformfield_isSet = !json[QString("a_objEzsignformfield")].isNull() && m_a_obj_ezsignformfield_isValid;
}

QString OAICustom_FormDataEzsignformfieldgroup_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICustom_FormDataEzsignformfieldgroup_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignformfieldgroup_label_isSet) {
        obj.insert(QString("sEzsignformfieldgroupLabel"), ::OpenAPI::toJsonValue(s_ezsignformfieldgroup_label));
    }
    if (a_obj_ezsignformfield.size() > 0) {
        obj.insert(QString("a_objEzsignformfield"), ::OpenAPI::toJsonValue(a_obj_ezsignformfield));
    }
    return obj;
}

QString OAICustom_FormDataEzsignformfieldgroup_Response::getSEzsignformfieldgroupLabel() const {
    return s_ezsignformfieldgroup_label;
}
void OAICustom_FormDataEzsignformfieldgroup_Response::setSEzsignformfieldgroupLabel(const QString &s_ezsignformfieldgroup_label) {
    this->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    this->m_s_ezsignformfieldgroup_label_isSet = true;
}

bool OAICustom_FormDataEzsignformfieldgroup_Response::is_s_ezsignformfieldgroup_label_Set() const{
    return m_s_ezsignformfieldgroup_label_isSet;
}

bool OAICustom_FormDataEzsignformfieldgroup_Response::is_s_ezsignformfieldgroup_label_Valid() const{
    return m_s_ezsignformfieldgroup_label_isValid;
}

QList<OAICustom_FormDataEzsignformfield_Response> OAICustom_FormDataEzsignformfieldgroup_Response::getAObjEzsignformfield() const {
    return a_obj_ezsignformfield;
}
void OAICustom_FormDataEzsignformfieldgroup_Response::setAObjEzsignformfield(const QList<OAICustom_FormDataEzsignformfield_Response> &a_obj_ezsignformfield) {
    this->a_obj_ezsignformfield = a_obj_ezsignformfield;
    this->m_a_obj_ezsignformfield_isSet = true;
}

bool OAICustom_FormDataEzsignformfieldgroup_Response::is_a_obj_ezsignformfield_Set() const{
    return m_a_obj_ezsignformfield_isSet;
}

bool OAICustom_FormDataEzsignformfieldgroup_Response::is_a_obj_ezsignformfield_Valid() const{
    return m_a_obj_ezsignformfield_isValid;
}

bool OAICustom_FormDataEzsignformfieldgroup_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignformfieldgroup_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_ezsignformfield.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICustom_FormDataEzsignformfieldgroup_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsignformfieldgroup_label_isValid && m_a_obj_ezsignformfield_isValid && true;
}

} // namespace OpenAPI
