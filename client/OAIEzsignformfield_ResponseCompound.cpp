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

#include "OAIEzsignformfield_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignformfield_ResponseCompound::OAIEzsignformfield_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignformfield_ResponseCompound::OAIEzsignformfield_ResponseCompound() {
    this->initializeModel();
}

OAIEzsignformfield_ResponseCompound::~OAIEzsignformfield_ResponseCompound() {}

void OAIEzsignformfield_ResponseCompound::initializeModel() {

    m_pki_ezsignformfield_id_isSet = false;
    m_pki_ezsignformfield_id_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;

    m_s_ezsignformfield_label_isSet = false;
    m_s_ezsignformfield_label_isValid = false;

    m_s_ezsignformfield_value_isSet = false;
    m_s_ezsignformfield_value_isValid = false;

    m_i_ezsignformfield_x_isSet = false;
    m_i_ezsignformfield_x_isValid = false;

    m_i_ezsignformfield_y_isSet = false;
    m_i_ezsignformfield_y_isValid = false;

    m_i_ezsignformfield_width_isSet = false;
    m_i_ezsignformfield_width_isValid = false;

    m_i_ezsignformfield_height_isSet = false;
    m_i_ezsignformfield_height_isValid = false;

    m_b_ezsignformfield_selected_isSet = false;
    m_b_ezsignformfield_selected_isValid = false;

    m_s_ezsignformfield_enteredvalue_isSet = false;
    m_s_ezsignformfield_enteredvalue_isValid = false;
}

void OAIEzsignformfield_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignformfield_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_pki_ezsignformfield_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignformfield_id, json[QString("pkiEzsignformfieldID")]);
    m_pki_ezsignformfield_id_isSet = !json[QString("pkiEzsignformfieldID")].isNull() && m_pki_ezsignformfield_id_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;

    m_s_ezsignformfield_label_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfield_label, json[QString("sEzsignformfieldLabel")]);
    m_s_ezsignformfield_label_isSet = !json[QString("sEzsignformfieldLabel")].isNull() && m_s_ezsignformfield_label_isValid;

    m_s_ezsignformfield_value_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfield_value, json[QString("sEzsignformfieldValue")]);
    m_s_ezsignformfield_value_isSet = !json[QString("sEzsignformfieldValue")].isNull() && m_s_ezsignformfield_value_isValid;

    m_i_ezsignformfield_x_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfield_x, json[QString("iEzsignformfieldX")]);
    m_i_ezsignformfield_x_isSet = !json[QString("iEzsignformfieldX")].isNull() && m_i_ezsignformfield_x_isValid;

    m_i_ezsignformfield_y_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfield_y, json[QString("iEzsignformfieldY")]);
    m_i_ezsignformfield_y_isSet = !json[QString("iEzsignformfieldY")].isNull() && m_i_ezsignformfield_y_isValid;

    m_i_ezsignformfield_width_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfield_width, json[QString("iEzsignformfieldWidth")]);
    m_i_ezsignformfield_width_isSet = !json[QString("iEzsignformfieldWidth")].isNull() && m_i_ezsignformfield_width_isValid;

    m_i_ezsignformfield_height_isValid = ::OpenAPI::fromJsonValue(i_ezsignformfield_height, json[QString("iEzsignformfieldHeight")]);
    m_i_ezsignformfield_height_isSet = !json[QString("iEzsignformfieldHeight")].isNull() && m_i_ezsignformfield_height_isValid;

    m_b_ezsignformfield_selected_isValid = ::OpenAPI::fromJsonValue(b_ezsignformfield_selected, json[QString("bEzsignformfieldSelected")]);
    m_b_ezsignformfield_selected_isSet = !json[QString("bEzsignformfieldSelected")].isNull() && m_b_ezsignformfield_selected_isValid;

    m_s_ezsignformfield_enteredvalue_isValid = ::OpenAPI::fromJsonValue(s_ezsignformfield_enteredvalue, json[QString("sEzsignformfieldEnteredvalue")]);
    m_s_ezsignformfield_enteredvalue_isSet = !json[QString("sEzsignformfieldEnteredvalue")].isNull() && m_s_ezsignformfield_enteredvalue_isValid;
}

QString OAIEzsignformfield_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignformfield_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_pki_ezsignformfield_id_isSet) {
        obj.insert(QString("pkiEzsignformfieldID"), ::OpenAPI::toJsonValue(pki_ezsignformfield_id));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsignpage_pagenumber));
    }
    if (m_s_ezsignformfield_label_isSet) {
        obj.insert(QString("sEzsignformfieldLabel"), ::OpenAPI::toJsonValue(s_ezsignformfield_label));
    }
    if (m_s_ezsignformfield_value_isSet) {
        obj.insert(QString("sEzsignformfieldValue"), ::OpenAPI::toJsonValue(s_ezsignformfield_value));
    }
    if (m_i_ezsignformfield_x_isSet) {
        obj.insert(QString("iEzsignformfieldX"), ::OpenAPI::toJsonValue(i_ezsignformfield_x));
    }
    if (m_i_ezsignformfield_y_isSet) {
        obj.insert(QString("iEzsignformfieldY"), ::OpenAPI::toJsonValue(i_ezsignformfield_y));
    }
    if (m_i_ezsignformfield_width_isSet) {
        obj.insert(QString("iEzsignformfieldWidth"), ::OpenAPI::toJsonValue(i_ezsignformfield_width));
    }
    if (m_i_ezsignformfield_height_isSet) {
        obj.insert(QString("iEzsignformfieldHeight"), ::OpenAPI::toJsonValue(i_ezsignformfield_height));
    }
    if (m_b_ezsignformfield_selected_isSet) {
        obj.insert(QString("bEzsignformfieldSelected"), ::OpenAPI::toJsonValue(b_ezsignformfield_selected));
    }
    if (m_s_ezsignformfield_enteredvalue_isSet) {
        obj.insert(QString("sEzsignformfieldEnteredvalue"), ::OpenAPI::toJsonValue(s_ezsignformfield_enteredvalue));
    }
    return obj;
}

qint32 OAIEzsignformfield_ResponseCompound::getPkiEzsignformfieldId() const {
    return pki_ezsignformfield_id;
}
void OAIEzsignformfield_ResponseCompound::setPkiEzsignformfieldId(const qint32 &pki_ezsignformfield_id) {
    this->pki_ezsignformfield_id = pki_ezsignformfield_id;
    this->m_pki_ezsignformfield_id_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_pki_ezsignformfield_id_Set() const{
    return m_pki_ezsignformfield_id_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_pki_ezsignformfield_id_Valid() const{
    return m_pki_ezsignformfield_id_isValid;
}

qint32 OAIEzsignformfield_ResponseCompound::getIEzsignpagePagenumber() const {
    return i_ezsignpage_pagenumber;
}
void OAIEzsignformfield_ResponseCompound::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    this->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    this->m_i_ezsignpage_pagenumber_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

QString OAIEzsignformfield_ResponseCompound::getSEzsignformfieldLabel() const {
    return s_ezsignformfield_label;
}
void OAIEzsignformfield_ResponseCompound::setSEzsignformfieldLabel(const QString &s_ezsignformfield_label) {
    this->s_ezsignformfield_label = s_ezsignformfield_label;
    this->m_s_ezsignformfield_label_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_s_ezsignformfield_label_Set() const{
    return m_s_ezsignformfield_label_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_s_ezsignformfield_label_Valid() const{
    return m_s_ezsignformfield_label_isValid;
}

QString OAIEzsignformfield_ResponseCompound::getSEzsignformfieldValue() const {
    return s_ezsignformfield_value;
}
void OAIEzsignformfield_ResponseCompound::setSEzsignformfieldValue(const QString &s_ezsignformfield_value) {
    this->s_ezsignformfield_value = s_ezsignformfield_value;
    this->m_s_ezsignformfield_value_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_s_ezsignformfield_value_Set() const{
    return m_s_ezsignformfield_value_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_s_ezsignformfield_value_Valid() const{
    return m_s_ezsignformfield_value_isValid;
}

qint32 OAIEzsignformfield_ResponseCompound::getIEzsignformfieldX() const {
    return i_ezsignformfield_x;
}
void OAIEzsignformfield_ResponseCompound::setIEzsignformfieldX(const qint32 &i_ezsignformfield_x) {
    this->i_ezsignformfield_x = i_ezsignformfield_x;
    this->m_i_ezsignformfield_x_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_x_Set() const{
    return m_i_ezsignformfield_x_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_x_Valid() const{
    return m_i_ezsignformfield_x_isValid;
}

qint32 OAIEzsignformfield_ResponseCompound::getIEzsignformfieldY() const {
    return i_ezsignformfield_y;
}
void OAIEzsignformfield_ResponseCompound::setIEzsignformfieldY(const qint32 &i_ezsignformfield_y) {
    this->i_ezsignformfield_y = i_ezsignformfield_y;
    this->m_i_ezsignformfield_y_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_y_Set() const{
    return m_i_ezsignformfield_y_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_y_Valid() const{
    return m_i_ezsignformfield_y_isValid;
}

qint32 OAIEzsignformfield_ResponseCompound::getIEzsignformfieldWidth() const {
    return i_ezsignformfield_width;
}
void OAIEzsignformfield_ResponseCompound::setIEzsignformfieldWidth(const qint32 &i_ezsignformfield_width) {
    this->i_ezsignformfield_width = i_ezsignformfield_width;
    this->m_i_ezsignformfield_width_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_width_Set() const{
    return m_i_ezsignformfield_width_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_width_Valid() const{
    return m_i_ezsignformfield_width_isValid;
}

qint32 OAIEzsignformfield_ResponseCompound::getIEzsignformfieldHeight() const {
    return i_ezsignformfield_height;
}
void OAIEzsignformfield_ResponseCompound::setIEzsignformfieldHeight(const qint32 &i_ezsignformfield_height) {
    this->i_ezsignformfield_height = i_ezsignformfield_height;
    this->m_i_ezsignformfield_height_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_height_Set() const{
    return m_i_ezsignformfield_height_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_i_ezsignformfield_height_Valid() const{
    return m_i_ezsignformfield_height_isValid;
}

bool OAIEzsignformfield_ResponseCompound::isBEzsignformfieldSelected() const {
    return b_ezsignformfield_selected;
}
void OAIEzsignformfield_ResponseCompound::setBEzsignformfieldSelected(const bool &b_ezsignformfield_selected) {
    this->b_ezsignformfield_selected = b_ezsignformfield_selected;
    this->m_b_ezsignformfield_selected_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_b_ezsignformfield_selected_Set() const{
    return m_b_ezsignformfield_selected_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_b_ezsignformfield_selected_Valid() const{
    return m_b_ezsignformfield_selected_isValid;
}

QString OAIEzsignformfield_ResponseCompound::getSEzsignformfieldEnteredvalue() const {
    return s_ezsignformfield_enteredvalue;
}
void OAIEzsignformfield_ResponseCompound::setSEzsignformfieldEnteredvalue(const QString &s_ezsignformfield_enteredvalue) {
    this->s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;
    this->m_s_ezsignformfield_enteredvalue_isSet = true;
}

bool OAIEzsignformfield_ResponseCompound::is_s_ezsignformfield_enteredvalue_Set() const{
    return m_s_ezsignformfield_enteredvalue_isSet;
}

bool OAIEzsignformfield_ResponseCompound::is_s_ezsignformfield_enteredvalue_Valid() const{
    return m_s_ezsignformfield_enteredvalue_isValid;
}

bool OAIEzsignformfield_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pki_ezsignformfield_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_label_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_value_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignformfield_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_b_ezsignformfield_selected_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignformfield_enteredvalue_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignformfield_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pki_ezsignformfield_id_isValid && m_i_ezsignpage_pagenumber_isValid && m_s_ezsignformfield_label_isValid && m_i_ezsignformfield_x_isValid && m_i_ezsignformfield_y_isValid && m_i_ezsignformfield_width_isValid && m_i_ezsignformfield_height_isValid && true;
}

} // namespace OpenAPI
