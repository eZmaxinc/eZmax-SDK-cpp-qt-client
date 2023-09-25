/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "Custom_Ezsignformfielderror_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "Helpers.h"

namespace Ezmaxapi {

Custom_Ezsignformfielderror_Response::Custom_Ezsignformfielderror_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

Custom_Ezsignformfielderror_Response::Custom_Ezsignformfielderror_Response() {
    this->initializeModel();
}

Custom_Ezsignformfielderror_Response::~Custom_Ezsignformfielderror_Response() {}

void Custom_Ezsignformfielderror_Response::initializeModel() {

    m_s_ezsignformfield_label_isSet = false;
    m_s_ezsignformfield_label_isValid = false;

    m_a_obj_ezsignformfielderrortest_isSet = false;
    m_a_obj_ezsignformfielderrortest_isValid = false;
}

void Custom_Ezsignformfielderror_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void Custom_Ezsignformfielderror_Response::fromJsonObject(QJsonObject json) {

    m_s_ezsignformfield_label_isValid = ::Ezmaxapi::fromJsonValue(m_s_ezsignformfield_label, json[QString("sEzsignformfieldLabel")]);
    m_s_ezsignformfield_label_isSet = !json[QString("sEzsignformfieldLabel")].isNull() && m_s_ezsignformfield_label_isValid;

    m_a_obj_ezsignformfielderrortest_isValid = ::Ezmaxapi::fromJsonValue(m_a_obj_ezsignformfielderrortest, json[QString("a_objEzsignformfielderrortest")]);
    m_a_obj_ezsignformfielderrortest_isSet = !json[QString("a_objEzsignformfielderrortest")].isNull() && m_a_obj_ezsignformfielderrortest_isValid;
}

QString Custom_Ezsignformfielderror_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject Custom_Ezsignformfielderror_Response::asJsonObject() const {
    QJsonObject obj;
    if (m_s_ezsignformfield_label_isSet) {
        obj.insert(QString("sEzsignformfieldLabel"), ::Ezmaxapi::toJsonValue(m_s_ezsignformfield_label));
    }
    if (m_a_obj_ezsignformfielderrortest.size() > 0) {
        obj.insert(QString("a_objEzsignformfielderrortest"), ::Ezmaxapi::toJsonValue(m_a_obj_ezsignformfielderrortest));
    }
    return obj;
}

QString Custom_Ezsignformfielderror_Response::getSEzsignformfieldLabel() const {
    return m_s_ezsignformfield_label;
}
void Custom_Ezsignformfielderror_Response::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    m_s_ezsignformfield_label = s_ezsignformfield_label;
    m_s_ezsignformfield_label_isSet = true;
}

bool Custom_Ezsignformfielderror_Response::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool Custom_Ezsignformfielderror_Response::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QList<Custom_Ezsignformfielderrortest_Response> Custom_Ezsignformfielderror_Response::getAObjEzsignformfielderrortest() const {
    return m_a_obj_ezsignformfielderrortest;
}
void Custom_Ezsignformfielderror_Response::setAObjEzsignformfielderrortest(const QList<Custom_Ezsignformfielderrortest_Response> &a_obj_ezsignformfielderrortest) {
    m_a_obj_ezsignformfielderrortest = a_obj_ezsignformfielderrortest;
    m_a_obj_ezsignformfielderrortest_isSet = true;
}

bool Custom_Ezsignformfielderror_Response::is_a_obj_ezsignformfielderrortest_Set() const{
    return m_a_obj_ezsignformfielderrortest_isSet;
}

bool Custom_Ezsignformfielderror_Response::is_a_obj_ezsignformfielderrortest_Valid() const{
    return m_a_obj_ezsignformfielderrortest_isValid;
}

bool Custom_Ezsignformfielderror_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_ezsignformfield_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_a_obj_ezsignformfielderrortest.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool Custom_Ezsignformfielderror_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_ezsignformfield_label_isValid && m_a_obj_ezsignformfielderrortest_isValid && true;
}

} // namespace Ezmaxapi
